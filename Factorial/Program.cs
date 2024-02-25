using System;

namespace Factorial
{
    class Program
    {
        static void Main()
        {
            bool error = true;
            do
            {
                try
                {
                    Console.Write("Enter non-negative number: ");
                    int number = Convert.ToInt32(Console.ReadLine());

                    if (number >= 0)
                        Console.WriteLine($"Factorial of {number} is: {GetFactorial(number)}");
                    else
                        throw new ArithmeticException();

                    error = false;
                }
                catch (Exception)
                {
                    Console.WriteLine("INVALID ENTRY!");
                }
            } while (error == true);

        }

        static long GetFactorial(int number)
        {
            if (number == 0)
                return 1;
            else
                return number * GetFactorial(number - 1);
        }
    }
}
