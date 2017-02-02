namespace Klassen_und_Vererbung2
{
    abstract class Pflanze
    {
        public abstract double GetHoehe();

        public string GetName()
        {
            return "Pflanze";
        }

        public virtual string GetBeschreibung()
        {
            return "eine Pflanze";
        }
    }
}