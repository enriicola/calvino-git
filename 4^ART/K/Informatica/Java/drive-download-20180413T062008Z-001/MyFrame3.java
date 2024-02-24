import javax.swing.*;
import java.awt.*;
public class MyFrame3 extends JFrame {
    public MyFrame3(String titolo) {
        super(titolo); //crea una finestra con il titolo passato come parametro
        this.setSize(400, 500); //dimensiona il pannello
        Container c = this.getContentPane(); 
        //c è un contenitore, this.getContentPane() prende la parte vuota della finestra
        //e la usa per inserirci il pannello che stiamo per creare
        MyPanel pannello = new MyPanel(); 
        //crea un pannello, tipo un foglio bianco, e lo inserisce nella finestra
        //JPanel pannello = new JPanel();
        c.add(pannello);
        setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        //operazione di default per dire alla finestra come comportarsi nel caso in cui
        //venisse chiusa la finestra
        JButton b1 = new JButton("");
        b1.(30, 40);
        b1.setActionCommand("disable");
        b1.setToolTipText("Click this button to disable "
                      + "the middle button.");
        add(b1);
        setVisible(true);
    }

    public static void main(String[] args) {
        MyFrame3 finestra = new MyFrame3("Campo Minato Caneva");
    }

}

