import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.Random;

/**
 * Aggiungi qui una descrizione della classe finestra
 * 
 * @author (il tuo nome) 
 * @version (un numero di versione o una data)
 */
public class Finestra extends JFrame implements ActionListener 
{
    // variabili d'istanza - sostituisci l'esempio che segue con il tuo

    JPanel p1;

    JButton b;
    JButton b1;
    JButton b2;
    JButton b3;
    JButton b4;
    JButton b5;
    JButton b6;
    JButton b7;
    JButton b8;
    JButton b9;
    JButton b10;
    JButton b11;
    JButton b12;
    JButton b13;
    JButton b14;
    JButton b15;
    JButton b16;
    JButton b17;
    JButton b18;
    JButton b19;
    JButton b20;
    JButton b21;
    JButton b22;
    JButton b23;
    JButton b24;

    /**
     * Costruttore degli oggetti di classe  finestra
     */
    public Finestra()
    {

        p1 = new JPanel();

        b= new JButton();
        b1 = new JButton();
        b2 = new JButton();
        b3 = new JButton();
        b4 = new JButton();
        b5 = new JButton();
        b6 = new JButton();
        b7 = new JButton();
        b8 = new JButton();
        b9 = new JButton();
        b10 = new JButton();
        b11 = new JButton();
        b12 = new JButton();
        b13 = new JButton();
        b14 = new JButton();
        b15 = new JButton();
        b16 = new JButton();
        b17 = new JButton();
        b18 = new JButton();
        b19 = new JButton();
        b20 = new JButton();
        b21 = new JButton();
        b22 = new JButton();
        b23 = new JButton();
        b24 = new JButton();
        
        
        
        
        b.setPreferredSize(new Dimension(100, 100));
        b1.setPreferredSize(new Dimension(100, 100));
        b2.setPreferredSize(new Dimension(100, 100));
        b3.setPreferredSize(new Dimension(100, 100));
        b4.setPreferredSize(new Dimension(100, 100));
        b5.setPreferredSize(new Dimension(100, 100));
        b6.setPreferredSize(new Dimension(100, 100));
        b7.setPreferredSize(new Dimension(100, 100));
        b8.setPreferredSize(new Dimension(100, 100));
        b9.setPreferredSize(new Dimension(100, 100));
        b10.setPreferredSize(new Dimension(100, 100));
        b11.setPreferredSize(new Dimension(100, 100));
        b12.setPreferredSize(new Dimension(100, 100));
        b13.setPreferredSize(new Dimension(100, 100));
        b14.setPreferredSize(new Dimension(100, 100));
        b15.setPreferredSize(new Dimension(100, 100));
        b16.setPreferredSize(new Dimension(100, 100));
        b17.setPreferredSize(new Dimension(100, 100));
        b18.setPreferredSize(new Dimension(100, 100));
        b19.setPreferredSize(new Dimension(100, 100));
        b20.setPreferredSize(new Dimension(100, 100));
        b21.setPreferredSize(new Dimension(100, 100));
        b22.setPreferredSize(new Dimension(100, 100));
        b23.setPreferredSize(new Dimension(100, 100));
        b24.setPreferredSize(new Dimension(100, 100));

        Container c = getContentPane();
        c.add(p1);

        p1.add(b);
        p1.add(b1);
        p1.add(b2);
        p1.add(b3);
        p1.add(b4);
        p1.add(b5);
        p1.add(b6);
        p1.add(b7);
        p1.add(b8);
        p1.add(b9);
        p1.add(b10);
        p1.add(b11);
        p1.add(b12);
        p1.add(b13);
        p1.add(b14);
        p1.add(b15);
        p1.add(b16);
        p1.add(b17);
        p1.add(b18);
        p1.add(b19);
        p1.add(b20);
        p1.add(b21);
        p1.add(b22);
        p1.add(b23);
        p1.add(b24);
        
        b.addActionListener(this);
        b.setActionCommand("");
        
    }
    @Override
    public void actionPerformed(ActionEvent event) {
        if(b.equals(event.getActionCommand())){
            b.setText("Tromba");
        }
        b.setVisible(true);
    }
}
