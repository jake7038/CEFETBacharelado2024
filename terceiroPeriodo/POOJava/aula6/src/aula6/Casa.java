package aula6;

public class Casa extends Imovel {
	public Casa(double preco) {
		super(preco);
	}
	public Casa() {
		this(100);
	}
	
	public double getPrecoFinal() {
		return super.getPrecoFinal() * 1.1;
	}
}
