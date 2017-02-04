public class Main {
	private static void printVector(Vector v) {
		System.out.printf("v(@%d): x(@%d)=%d, y(@%d)=%d\n", v.hashCode(), v.x, v.x, v.y, v.y);
	}
	
	public static void main(String[] args) {
		Vector v1 = new Vector(5, 3);
		printVector(v1);
		Vector v2 = new Vector(9, 7);
		printVector(v2);

		Vector v3 = v1;
		printVector(v3);

		Vector v4 = new Vector(v1);
		printVector(v4);
		
		// pos1
	}
}