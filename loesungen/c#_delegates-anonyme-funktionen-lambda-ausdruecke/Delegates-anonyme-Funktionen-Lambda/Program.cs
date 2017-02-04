using System;

namespace Delegates_anonyme_Funktionen_Lambda
{
    class Program
    {
        // definiere das Delegate Ausgabe mit der gleichen Signatur,
        // wie die Funktion GutenTag
        public delegate void Ausgabe(string s);

        public static void GutenTag(string name)
        {
            Console.WriteLine("GutenTag > {0}", name);
        }

        static void Main(string[] args)
        {
            // initialisiere das delegate ausgabe mit der Funktion GutenTag
            Ausgabe ausgabe = GutenTag;
            
            // füge eine anonyme Funktion hinzu
            ausgabe += delegate (string name)
            {
                Console.WriteLine("anonyme Funktion > {0}", name);
            };

            // füge einen Lambda-Audruck hinzu
            ausgabe += (string name) => Console.WriteLine("Lambda > {0}", name);

            ausgabe("Peter Zwegat");

            // entferne die Funktion GutenTag
            ausgabe -= GutenTag;

            ausgabe("Niki Lauda");

            Console.ReadLine();
        }
    }
}