namespace Klassen_und_Vererbung2
{
    class Akazie : Pflanze
    {
        double Hoehe;

        public Akazie(double Hoehe)
        {
            this.Hoehe = Hoehe;
        }

        public override double GetHoehe()
        {
            return Hoehe;
        }

        new public string GetName()
        {
            return "Akazie";
        }

        public override string GetBeschreibung()
        {
            return "eine Akazie";
        }
    }
}