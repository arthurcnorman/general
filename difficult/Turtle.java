/*
 *  Turtle.java                                 A C Norman
 *  illustration of Turtle Graphics and the "paint" method.
 */

import javax.swing.*;
import java.awt.*;
import static java.lang.Math.*;

public class Turtle extends JApplet
{
    public void paint(Graphics g)
    {   // Try changing the following 3 numbers...
        double size = 5.0, inc = 11.0;
        int N = 5000;
        double x = 200.0, y=200.0,
               th1 = 0.0, th2 = 0.0, th3  = 0.0;
        for (int i=0; i<N; i++)
        {   th3 = th3 + inc;
            th2 = th2 + th3;
            th1 = th1 + th2;
            double x1 = x+size*cos(PI*th1/180.0);
            double y1 = y+size*sin(PI*th1/180.0);
            g.drawLine((int)x, (int)y, (int)x1, (int)y1);
            x = x1;
            y = y1;
        }
    }
}
/* end of Turtle.java */

