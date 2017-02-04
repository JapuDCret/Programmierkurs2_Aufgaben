using System;

namespace Exceptions_und_Operatorenueberladung
{
    class Program
    {
        static Vector testVector(Vector a, Vector b)
        {
            Vector result = null;

            // hier die Addition testen und ggf. eine Exception fangen
            try
            {
                result = a + b;
            }
            catch (Exception e)
            {
                Console.WriteLine("ein Fehler ist aufgetreten: {0}", e.Message);
            }

            return result;
        }

        static void Main(string[] args)
        {
            Vector v1 = new Vector(4, 2);
            Vector v2 = new Vector(1, 9);
            Vector v3 = new Vector(0, 9);

            Console.WriteLine("Addiere v1 und v2");
            Vector v4 = testVector(v1, v2);
            Console.WriteLine("Addiere v1 und v3");
            Vector v5 = testVector(v1, v3);
            Console.WriteLine("Addiere v2 und v3");
            Vector v6 = testVector(v2, v3);

            Console.WriteLine("v1: {0}", v1);
            Console.WriteLine("v2: {0}", v2);
            Console.WriteLine("v3: {0}", v3);
            Console.WriteLine("v4: {0}", v4);
            Console.WriteLine("v5: {0}", v5);
            Console.WriteLine("v6: {0}", v6);

            Console.ReadLine();
        }
    }
}