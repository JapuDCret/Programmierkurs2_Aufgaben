using System;
using System.Runtime.InteropServices;

namespace Speichermodell
{
    [StructLayout(LayoutKind.Sequential)]
    class Vector
    {
        int x;
        int y;

        public Vector(int x, int y)
        {
            this.x = x;
            this.y = y;
        }

        public Vector(Vector v) : this(v.x, v.y)
        {
        }
    }

    class Program
    {
        static unsafe void printVector(ref Vector v)
        {
            TypedReference tr = __makeref(v);
            IntPtr addrV = **(IntPtr**)(&tr);

            int i;
            int* ptr = &i;
            IntPtr addrX = (IntPtr)ptr;
            GCHandle h = GCHandle.Alloc(v, GCHandleType.Pinned);
            addrX = h.AddrOfPinnedObject();
            IntPtr addrY = addrX + sizeof(int);

            h.Free();

            int x = *((int*) addrX.ToPointer());
            int y = *((int*) addrY.ToPointer());

            Console.WriteLine("v(@{0}): x(@{1})={2}, y(@{3})={4}", addrV.ToString("x"), addrX.ToString("x"), x, addrY.ToString("x"), y);
        }
        
        static void Main(string[] args)
        {
            Vector v1 = new Vector(5, 3);
            printVector(ref v1);
            Vector v2 = new Vector(9, 7);
            printVector(ref v2);

            Vector v3 = v1;
            printVector(ref v3);

            Vector v4 = new Vector(v1);
            printVector(ref v4);
            // pos1
            Console.ReadLine();
        }
    }
}