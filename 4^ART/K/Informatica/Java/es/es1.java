import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

   public class es1 extends JFrame implements ActionListener{
    JButton b;
    JButton b1;
    JLabel l;
    JTextField t;
    JTextField t1;
    int i=0;
    
    public static void main(String[] args) {
        es1 f = new es1();
        f.setSize(400,200);
        f.setVisible(true);
    }
    public es1(){
        Container c = getContentPane();
        JPanel p = new JPanel();
        JPanel p1= new JPanel();
        JPanel p2= new JPanel();
        JPanel p3= new JPanel();
        c.add(p1,BorderLayout.NORTH);
        c.add(p2,BorderLayout.CENTER);
        c.add(p,BorderLayout.SOUTH);
        b = new JButton("Mostra");
        b1 = new JButton("Uscita");
        l = new JLabel();
        t = new JTextField(20);
        t1 = new JTextField(20);
        p1.add(t);
        p2.add(t1);
        p.add(l);
        p.add(b);
        b.addActionListener(this);
        b.setActionCommand("Mostra");
        p.add(b1);
        b1.addActionListener(this);
        b1.setActionCommand("Uscita");
    }
    @Override
    public void actionPerformed(ActionEvent event) {
        if("Mostra".equals(event.getActionCommand())){
            i++;
            l.setText("il bottone è stato premuto "+i+" volte");
        }
        if("Uscita".equals(event.getActionCommand())){
            System.exit(0);
        }
        l.setVisible(true);
  }
}