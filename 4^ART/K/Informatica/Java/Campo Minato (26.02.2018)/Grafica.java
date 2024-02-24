import java.awt.*;
import java.awt.event.*;
import java.awt.FlowLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import java.awt.Choice;
import java.awt.Frame;
import java.awt.GridLayout;
import java.awt.Label;
import java.awt.TextField;
import java.awt.event.WindowEvent;
import java.awt.event.WindowListener;

public class Grafica
{
    JFrame frame = new JFrame("campo minato");
    Panel p = new Panel();
    JButton[][] grid;
    public Grafica(int width, int length)
    {
        frame.setLayout(new GridLayout(width, length));
        grid=new JButton[width][length];
        frame.setBounds(300, 300, 500, 500);
        TextField nome = new TextField(10);
        frame.setResizable(false);
        
        for(int y=0; y<length; y++)
            for(int x=0; x<width; x++){
                grid[x][y]=new JButton("");
                p.add(grid[x][y],"Center");
            }
        frame.setVisible(true);  
    }
}