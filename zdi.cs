public Tuple<int, bool> GetMultipleValue()
{
    return Tuple.Create(1, true);
}

Tuple<int, bool> result = GetMultipleValue();
int  i = result.Item1;
bool b = result.Item2;


class Map
{
    public char[,] map = new char[,]
    {
        { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' },
        { '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#' },
        { '#', ' ', '#', ' ', '#', ' ', '#', ' ', ' ', '#' },
        { '#', ' ', '#', '%', ' ', ' ', '#', ' ', ' ', '#' },
        { '#', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', '#' },
        { '#', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', '#' },
        { '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#' },
        { '#', ' ', ' ', ' ', ' ', ' ', '%', ' ', ' ', '#' },
        { '#', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', '#' },
        { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }
    };

    public void draw()
    {
        // vykresli konzoli
        return;
    }

    public bool canWalkOn(int x, int y)
    {
        return map[x, y] == ' ';
    }

    public bool getBonus(int x, int y)
    {
        return map[x, y] == '%';
    }

}
