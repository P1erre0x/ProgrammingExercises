namespace Ex03 {
    class Carro {
        int marcha;
        int velocidade;
        int acumulador;
        public void Acelerar(int valor) {
            if (valor > 0) {
                acumulador += valor;
                if (acumulador >= 20) {
                    Console.WriteLine("Vou trocar a marcha aqui pae");
                    velocidade += valor;
                    TrocarMarcha(1);
                    acumulador = 0;
                }
                else {
                    velocidade += valor;

                    Console.WriteLine($"Velocidade Atual: {velocidade}");
                }
            }
            return;
        }

        void TrocarMarcha(int valor) {
            if (marcha - valor >= 2 || valor <= 0) {
                Console.WriteLine("Não é possível trocar a marcha.");
            }                       
            else {
                marcha += 1;
                Console.WriteLine($"Marcha atual: {marcha}");

            }
            return;
            
        }
    }
}
