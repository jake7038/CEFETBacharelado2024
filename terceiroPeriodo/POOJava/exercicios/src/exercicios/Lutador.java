package exercicios;

public abstract class Lutador {
	private String nome;
	private int idade;
	private double peso;
	
	public Lutador(String nome, int idade, double peso) {
		this.nome = nome;
		this.idade = idade;
		this.peso= peso;
	}

	public String getNome() {
		return nome;
	}


	public double getPeso() {
		return peso;
	}


	public int getIdade() {
		return idade;
	}

	
	
	
}
