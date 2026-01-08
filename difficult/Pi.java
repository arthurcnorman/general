class Pi
{
static public void main(String [] args)
{
      double a = 1.0; 
      double b = 1/Math.sqrt(2.0); 
      double u = 0.25; 
      double x = 1.0;
      double pn = 4.0, p;
      do
      {   p = pn;
          double y = a; 
          a = (a+b)/2.0; 
          b = Math.sqrt(y*b);
          u = u-x*(a-y)*(a-y);
          x = 2*x; 
          pn = a*a/u;
          System.out.println(pn);
      } while (pn < p);
}
}