import java.awt.*;
import java.awt.event.*;

public class AreaAWTExample extends Frame implements ActionListener
{
    TextArea ar;
    Label l1,l2;
    Button b1;
    AreaAWTExample()
    {
        ar=new TextArea();
        ar.setBounds(20, 100, 300, 300);
        l1=new Label();
        l1.setBounds(50, 50, 100, 30);
        l2=new Label();
        l2.setBounds(160, 50, 100, 30);

        b1=new Button("Count");
        b1.setBounds(100, 400, 100, 30);

        b1.addActionListener(this);
        add(l1);
        add(l2);
        add(ar);
        add(b1);

        setSize(400,400);
        setLayout(null);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e)
    {
        String s1=ar.getText();
        String words[]=s1.split("\\s");
        l1.setText("Words => "+words.length);
        l2.setText("Characters => "+s1.length());
    }
    public static void main(String[] args) {
        AreaAWTExample obj=new AreaAWTExample();
    }

    public void windowClosing(WindowEvent e)
    {
        System.exit(0);
    }
    public void windowOpened(WindowEvent e){}
    public void windowClosed(WindowEvent e){}
    public void windowActivated(WindowEvent e){}
    public void windowDeactivated(WindowEvent e){}
    public void windowIconified(WindowEvent e){}
    public void windowDeiconified(WindowEvent e){}

}
