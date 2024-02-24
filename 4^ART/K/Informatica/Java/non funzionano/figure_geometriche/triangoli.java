public class triangoli extends fig_geo
{
    public int base;
    public int altezza;
    public float area()
    {
        return (base * altezza) / 2;
    }
    public int perimetro()
    {
        return base * 3;
    }
}