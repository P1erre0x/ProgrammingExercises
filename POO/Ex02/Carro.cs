namespace Ex02 {
    class Carro {
        float velocidade;

        public void Acelerar(float valor) {
            if (valor > 0) {
                velocidade += valor;
                Console.WriteLine("Vruuuuuuuuuuum");
            }
            if (velocidade > 80) {
                float multa = (velocidade - 80) * 5;
                Console.WriteLine($"Foi aplicado uma multa de exatos: R$ {multa.ToString("F2")}");
            }
        }
        public void Desacelerar(float valor) {
            if (valor > 0) {
                velocidade -= valor;
                Console.WriteLine("Desvruuum");
            }
        }
    }
}
