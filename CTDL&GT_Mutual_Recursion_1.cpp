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
