package exercicios;

public class Aluno {
	private String nome;
	private double nota1;
	private double nota2;
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public double getNota1() {
		return nota1;
	}
	public void setNota1(double nota1) {
		if(nota1 < 0) {
			this.nota1 = 0;
		}
		else {
			if(nota1 > 10) {
				this.nota1 = 10;
			}
			else {
				this.nota1 = nota1;
			}
		}
		
	}
	public double getNota2() {
		return nota2;
	}
	public void setNota2(double nota2) {
		if(nota2 < 0) {
			this.nota2 = 0;
		}
		else {
			if(nota2 > 10) {
				this.nota2 = 10;
			}
			else {
				this.nota2 = nota2;
			}
		}
	}
	
	public void media() {
		double media = (nota1 + nota2)/2;
		if(media >= 6) {
			System.out.println("Aprovado");
		} else {
			if(media < 4) {
				System.out.println("Reprovado");
			}else {
				System.out.println("Em Recuperação");
			}
		}
		
		
	}
	
	public static void main(String args[]) {
		Aluno x = new Aluno();
		x.setNome("rafael");
		x.nota1 = 7;
		x.setNota2(7);
		x.media();
	}
}



