package aula5;

public class Zoo {
	public static void main(String[] arg) {
		Animal x = new Zebra();
		x.setNome("simba");
		
		x.correr(); //da ruim no tempo de execução e ele usa o correr do Leao
		teste(x); 
		Leao z = new Leao();
		System.out.println(z.toString());
		
		Animal w [] =  new Animal[3];
		 w[0] =  new Zebra();
		 w[1] = new Leao();
		
		
		Animal w [] = (Animal []) new Leao[3];
		 w[0] = (Animal) w[0];
		 w[0] =  new Zebra();
		 w[0].correr();
		
	}
	public static void teste(Animal a) {
		if(a instanceof Leao) { //polimorfismo
			System.out.println("entrou");
			Leao x = (Leao) a; 
			x.rugir();
			x.correr();
			
		}
	}
	
}
