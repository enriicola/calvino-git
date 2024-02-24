
import javax.swing.*;
public class MyFrame2 extends JFrame {
    public MyFrame2(String titolo) {
        super(titolo);
        //Setto le dimensioni della finestra
        setSize(400, 200);
        //Questo metodo rende la finestra NON ridimensionabile
        setResizable(false);
        //Setto la posizione della finestra sullo schermo
        setLocation(150, 500);
        //Attiva operazione di chiusura la finestra
        setVisible(true);
    }

    public MyFrame2() {
        super();
        setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        //x,y iniziali, lunghezza, altezza
        setBounds(150, 50, 250, 500);
        setVisible(true);
    }

    public MyFrame2(int xp, int yp, int xf, int yf, String t) {
        super(t);
        setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        //x,y iniziali, x,y finali
        setBounds(xp,yp, xf, yf);
        setVisible(true);
    }

    public static void main(String[] args) {
        MyFrame2 f2= new MyFrame2(30,45, 200, 400, "seconda");
        MyFrame2 f3= new MyFrame2(4,20, 340, 432, "prima");
    }
}
