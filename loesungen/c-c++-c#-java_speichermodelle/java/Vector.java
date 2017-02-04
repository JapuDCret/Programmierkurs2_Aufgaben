public class Vector {
	public int x, y;
	
	public Vector(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	public Vector(Vector v) {
		this(v.x, v.y);
	}
}