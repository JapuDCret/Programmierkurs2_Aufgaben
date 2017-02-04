using System;

namespace Exceptions_und_Operatorenueberladung
{
    class Vector
    {
        private int x, y;

        public Vector(int x, int y)
        {
            this.x = x;
            this.y = y;
        }

        // hier Operator überladen
        public static Vector operator+(Vector a, Vector b)
        {
            if (!((a.x > 0) && (a.y > 0) && (b.x > 0) && (b.y > 0)))
            {
                throw new Exception("Vector values must be positive");
            }

            return new Vector(a.x + b.x, a.y + b.y);
        }

        public override string ToString()
        {
            return string.Format("x={0}, y={1}", x, y);
        }
    }
}