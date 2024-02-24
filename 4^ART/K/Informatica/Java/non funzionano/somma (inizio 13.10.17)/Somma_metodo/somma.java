public class somma
{
    public static int sampleSomma(int y, int x, int s)
    {
        s=x+y;
        return s;
    }
    
    public static void main(String[] args){
        int x=245, y=45, s=0;
        int n1= sampleSomma(x,y,s);
        System.out.println("risultato: "+n1);
    }
}

