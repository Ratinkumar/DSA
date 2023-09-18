import java.awt.*;
import java.awt.event.*;

public class ButtonDemo extends Frame implements ActionListener
{
    Button b1,b2;
    ButtonDemo()
    {
        b1=new Button("Button 1");
        b2=new Button("Button 2");
        b1.setActionCommand("Button 1");
        b2.setActionCommand("Button 2");
        b1.addActionListener(this);
        b2.addActionListener(this);
        add(b1);
        add(b2);

        setSize(400,400);
        setLayout(new FlowLayout());
        setVisible(true);

    }
    public void actionPerformed(ActionEvent e)
    {
        String s=e.getActionCommand();
        if(s.equals("Button 1"))
        {
            System.out.println("Button 1 is pressed.");
        }
        else if(s.equals("Button 2"))
        {
            System.out.println("Button 2 is pressed.");
        }
    }
    
    public static void main(String[] args) {
        ButtonDemo obj=new ButtonDemo();
    }
}
