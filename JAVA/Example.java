import java.awt.*;
import java.awt.event.*;

public class Example extends Frame implements ActionListener
{
    TextField t1,t2;
    Label l;
    Button b1;
    Example()
    {
        t1=new TextField();
        t2=new TextField();
        //t3=new TextField();
        t1.setBounds(20, 50, 80, 30);
        t2.setBounds(20, 100, 80, 30);
        //t3.setBounds(20, 150, 80, 30);

        l=new Label();
        l.setBounds(20, 150, 100, 30);

        b1=new Button("Submit");
        b1.setBounds(50, 200, 50, 50);

        b1.addActionListener(this);
        add(t1);
        add(t2);
        //add(t3);
        add(l);
        add(b1);

        setSize(400,400);
        setLayout(null);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e)
    {
        String s1=t1.getText();
        String s2=t2.getText();
        int a=Integer.parseInt(s1);
        int b=Integer.parseInt(s2);
        int c=0;
        if(e.getSource()==b1)
        {
            c=((a*a)-(b*b));
        }
        String result=String.valueOf(c);
        //t3.setText(result);
        l.setText("Answer is =>"+result);
    }
    public static void main(String[] args) {
        Example obj=new Example();
    }
}
