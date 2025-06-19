#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <memory.h>
#include <libexif/exif-data.h>

const char *folder = "./dovolena";

void format_date(const char *exif_date, char *output, size_t max_len)
{
    int year, month, day, hour, min, sec;
    if (sscanf(exif_date, "%d:%d:%d %d:%d:%d",
               &year, &month, &day, &hour, &min, &sec) == 6)
    {
        snprintf(output, max_len, "%04d-%02d-%02d_%02d-%02d-%02d",
                 year, month, day, hour, min, sec);
    }
    else
    {
        strncpy(output, "unknown", max_len);
    }
}

char *get_datetime_from_exif(const char *filename)
{
    ExifData *ed = exif_data_new_from_file(filename);
    if (!ed)
        return NULL;

    char *datetime = NULL;
    ExifEntry *entry = exif_data_get_entry(ed, EXIF_TAG_DATE_TIME_ORIGINAL);
    if (entry)
        datetime = strndup((char *)entry->data, entry->size);

    exif_data_unref(ed);
    return datetime;
}

int main()
{
    DIR *dir = opendir(folder);
    if (!dir)
        return 1;

    struct dirent *entry;
    char old_path[512], new_path[512];
    int counter = 1;

    while ((entry = readdir(dir)) != NULL)
    {
        snprintf(old_path, sizeof(old_path), "%s/%s", folder, entry->d_name);

        char *exif_time = get_datetime_from_exif(old_path);
        if (!exif_time)
            continue;

        char formatted[64];
        format_date(exif_time, formatted, sizeof(formatted));
        free(exif_time);

        snprintf(new_path, sizeof(new_path), "%s/%s.jpg", folder, formatted);

        if (rename(old_path, new_path) == 0)
            printf("Přejmenováno: %s -> %s\n", entry->d_name, new_path);
        else
            perror("rename");
    }

    closedir(dir);
    return 0;
}
