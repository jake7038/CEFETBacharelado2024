package exercicios;
//troca de arrays
public class TrocaArray {
	public static void main(String args[]) {
		int array[] = {1,7,6,5,3,2,33,77,88,99,66,10,22,24,35,44,65,42,18,19};
		troca(array);
		for(int i =0, j = array.length-1; i < array.length ; i++, j--) {
			System.out.print(array);
		}
	}
	
	public static void troca(int array[]) {
		int aux[] = new int [20];
		for(int i =0, j = array.length-1; i < array.length ; i++, j--) {
			aux[j] = array[i];
		}
		for(int i = 0; i < array.length; i++) {
	        array[i] = aux[i];
	    }		
	}
	

	
}
