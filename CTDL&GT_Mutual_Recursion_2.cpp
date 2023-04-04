//https://www.geeksforgeeks.org/
class mutualRecursion{
     
    static int mutualRecursion(int n)
    {
        if (n < 0)
            return 0;
        else
            return (n == 0) ? 1 : n -
            mutualRecursion(n - 1);
    }
     
    static int mutualRecursion(int n)
    {
        if (n < 0)
            return 0;
        else
            return (n == 0) ? 0 : n -
                mutualRecursion(n - 1);
    }
  static public void main (String[] args)
    {
        int i;
        System.out.print("F: ");
        for (i = 0; i < 20; i++)
            System.out.print(mutualRecursion(i)+ " ");
         
        System.out.println();
     
        System.out.print("M: ");
        for (i = 0; i < 20; i++)
            System.out.print(mutualRecursion(i)+ " ");
    }
}
