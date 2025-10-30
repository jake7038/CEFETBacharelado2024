package aula4;
import java.util.Scanner;
public class CaixaAutomatica {

	public static void main(String[] arg) {
		Conta x = new Conta("teste");
		x.setNomeCliente("ana");
		x.setSaldo(20);
		System.out.println("Quanto vai sacar?");
		Scanner sc = new Scanner(System.in);
		double valor = sc.nextDouble();
		sc.close();
		if(x.debitar(valor)) {
			System.out.println("liberando " + valor + " Reais" );
			System.out.println("Saldo: " +x.getSaldo());
		}
	}
}
