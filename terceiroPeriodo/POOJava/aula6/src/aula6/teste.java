package aula6;

public class teste {

	public static void main(String args[]) {
	
		String x [] = {"Ana Maria#21" , "julia#18"};
		Imovel y = new Imovel(200);
		
		int  p=0;
		
		for(int i = 0  ; i < x.length ; i++ ) {
			String k [] = x[i].split("#");
			p += Integer.parseInt(k[1]);
		}
		
		System.out.println((p/x.length));
		
		System.out.println(y);
		

	}


	
}
