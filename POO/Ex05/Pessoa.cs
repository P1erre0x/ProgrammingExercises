namespace Ex05 {
    class Pessoa {
        private float SaldoCarteira;
        ContaBancaria conta = new ContaBancaria();

        public void SaqueDinheiro(float valor) {
            if (conta.Saque(valor) == 0) {
                SaldoCarteira += valor;
                Console.WriteLine($"Saldo atual na carteira:{SaldoCarteira}");
            }
            else {
                Console.WriteLine("Saldo Insuficiente ou Valor Inválido.");
            }
        }
    }
}
