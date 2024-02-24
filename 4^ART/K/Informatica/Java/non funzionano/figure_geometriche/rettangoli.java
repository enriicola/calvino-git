public class rettangoli extends fig_geo
{
    public int base;
    public int altezza;
    public int area()
    {
        return base * altezza;
    }
    public int perimetro()
    {
        return (base+altezza) * 2;
    }
}