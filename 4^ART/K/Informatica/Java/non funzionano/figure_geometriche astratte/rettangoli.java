public class rettangoli extends fig_geo
{
    
    public float area()
    {
        return base * altezza;
    }
    public float perimetro()
    {
        return (base+altezza) * 2;
    }
}