import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class AWTexample extends Frame implements ActionListener
{
    TextField t;
    AWTexample()
    {
        Label l=new Label("Emoloyee Info.");
        Button b=new Button("Submit");
        t=new TextField();

        l.setBounds(20, 80, 80, 30);
        t.setBounds(20, 100, 80, 30);
        b.setBounds(100, 100, 80, 30);

        b.addActionListener(this);

        add(l);
        add(b);
        add(t);

        setSize(300, 300);
        setTitle("Employee Data");
        setLayout(null);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e)
    {
        t.setText("Welcome");
    }
    public static void main(String[] args) {
        AWTexample obj=new AWTexample();
    }
}
