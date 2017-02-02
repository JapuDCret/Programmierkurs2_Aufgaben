namespace Klassen_und_Vererbung
{
    class Tanne : Pflanze
    {
        private double hoehe;

        public Tanne(double hoehe)
        {
            this.hoehe = hoehe;
        }

        public override double getHoehe()
        {
            return hoehe;
        }
    }
}