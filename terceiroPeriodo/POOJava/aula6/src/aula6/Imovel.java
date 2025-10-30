package aula6;

public class Imovel {
	private double preco;
	
	public Imovel(double preco) {
		this.preco = preco;
	}
	
	public double getPreco() {
		return preco;
	}
	
	
	
	public double getPrecoFinal(){
		return preco + (preco * 0.1);
	}
	
	public String toString() {
		return "" + preco;
	}
	
}
