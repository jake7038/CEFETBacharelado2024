package aula4;

public class Conta {
	private  String nomeCliente;
	private double saldo;
	
	
	
	public Conta(String teste) {
		System.out.println("Objeto criado\n");
		//this(teste) se refere a um construtor da classe com o parametro string
	}
	
	public boolean debitar(double val) {
		if(val <= saldo) {
			saldo = saldo - val;
			System.out.println("Debito efetuado");
			return true;
		} else {
			System.out.println("debito não efetuado\n");
			return false;
		}
	}
	public void setNomeCliente(String nomeCliente) {
		this.nomeCliente= nomeCliente;
	}
	public void setSaldo(double saldo) {
		if(saldo < 0) {
			throw new RuntimeException();
		}
		this.saldo = saldo; //this se refere ao nome do objeto
	}
	public double getSaldo() {
		return saldo;
	}
	
}
