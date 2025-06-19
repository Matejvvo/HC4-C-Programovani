import os
from PIL import Image
from PIL.ExifTags import TAGS
from datetime import datetime


def get_datetime_original(filepath):
    try:
        image = Image.open(filepath)
        exif_data = image._getexif()
        if not exif_data:
            return None

        for tag_id, value in exif_data.items():
            tag = TAGS.get(tag_id, tag_id)
            if tag == "DateTimeOriginal":
                return value  # e.g., "2023:06:11 14:23:58"
    except Exception as e:
        print(f"Chyba při čtení EXIF z {filepath}: {e}")
    return None


def format_datetime(dt_str):
    try:
        dt = datetime.strptime(dt_str, "%Y:%m:%d %H:%M:%S")
        return dt.strftime("%Y-%m-%d_%H-%M-%S")
    except:
        return "unknown"


for filename in os.listdir(folder):
    if filename.lower().endswith((".jpg", ".jpeg")):
        full_path = os.path.join(folder, filename)
        dt_original = get_datetime_original(full_path)

        if not dt_original:
            print(f"Bez EXIF: {filename}")
            continue

        formatted = format_datetime(dt_original)
        new_name = f"{formatted}.jpg"
        new_path = os.path.join(folder, new_name)

        i = 1
        while os.path.exists(new_path):
            new_name = f"{formatted}_{i}.jpg"
            new_path = os.path.join(folder, new_name)
            i += 1

        os.rename(full_path, new_path)
        print(f"Přejmenováno: {filename} -> {new_name}")
