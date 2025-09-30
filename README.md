# 🎮 Super Trunfo - Jogo de Cartas

## 📋 Sobre o Projeto

Este é um projeto desenvolvido em **C** que implementa o clássico jogo **Super Trunfo** com cartas de países. O jogo permite que o usuário escolha duas cartas e compare dois atributos diferentes para determinar o vencedor da rodada.

## 👩‍💻 Desenvolvedora

**Bruna Garcia**  
Estudante do 1º Semestre - Curso de Tecnologia da Informação  
Universidade Estácio

## 🎯 Funcionalidades

- ✅ **3 Cartas de Países**: Brasil, Japão e Estados Unidos
- ✅ **5 Atributos por Carta**:
  - Força Militar
  - Velocidade de Desenvolvimento  
  - Inteligência Coletiva
  - Densidade Demográfica
  - População Total
- ✅ **Sistema de Comparação**: Compara 2 atributos diferentes
- ✅ **Lógica Especial**: Densidade Demográfica (menor valor vence)
- ✅ **Interface Amigável**: Menus claros e emojis
- ✅ **Validação de Entrada**: Impede escolhas inválidas
- ✅ **Sistema de Pontos**: Conta vitórias por atributo

## 🚀 Como Executar

### Pré-requisitos
- Compilador GCC instalado
- Sistema operacional Linux, macOS ou Windows

### Compilação e Execução

```bash
# Navegue até a pasta do projeto
cd supertrunfo

# Compile o programa
gcc src/supertrunfo.c -o supertrunfo

# Execute o jogo
./supertrunfo
```

### No Windows (usando MinGW)
```cmd
gcc src/supertrunfo.c -o supertrunfo.exe
supertrunfo.exe
```

## 🎲 Como Jogar

1. **Escolha das Cartas**: Selecione duas cartas diferentes (1, 2 ou 3)
2. **Escolha dos Atributos**: Selecione dois atributos diferentes para comparar
3. **Resultado**: O jogo compara os atributos e declara o vencedor

### Regras do Jogo

- **Maior valor vence**: Para Força, Velocidade, Inteligência e População
- **Menor valor vence**: Para Densidade Demográfica
- **Sistema de pontos**: Cada atributo vencido vale 1 ponto
- **Vencedor**: Quem tiver mais pontos no total

## 📊 Estrutura do Projeto

```
supertrunfo/
├── src/
│   └── supertrunfo.c    # Código fonte principal
├── docs/                # Documentação adicional
└── README.md           # Este arquivo
```

## 🔧 Estrutura do Código

### Estruturas de Dados
```c
typedef struct {
    char nome[50];
    int forca;
    int velocidade;
    int inteligencia;
    int densidade_demografica;
    int populacao;
} Carta;
```

### Funções Principais
- `exibirMenuAtributos()` - Exibe menu de seleção
- `obterValorAtributo()` - Retorna valor de um atributo
- `compararCartas()` - Compara duas cartas
- `exibirCarta()` - Mostra informações da carta

## 🎯 Objetivos de Aprendizado

Este projeto foi desenvolvido para praticar:
- ✅ **Estruturas de dados** em C
- ✅ **Funções e modularização**
- ✅ **Estruturas de controle** (if, switch, while)
- ✅ **Entrada e saída** de dados
- ✅ **Validação de entrada**
- ✅ **Interface de usuário** em terminal

## 🛠️ Tecnologias Utilizadas

- **Linguagem**: C (ANSI C)
- **Compilador**: GCC
- **IDE**: Qualquer editor de texto ou IDE
- **Sistema**: Multiplataforma

## 📈 Melhorias Futuras

- [ ] Adicionar mais cartas de países
- [ ] Implementar sistema de pontuação persistente
- [ ] Adicionar modo multiplayer
- [ ] Interface gráfica
- [ ] Sistema de ranking
- [ ] Cartas aleatórias

## 📝 Licença

Este projeto é de uso educacional e foi desenvolvido para fins acadêmicos.


**Bruna Garcia**  
📧 Email: [bruba.garcia.bg@gmail.com]  
🎓 Curso: Tecnologia da Informação - 1º Semestre  

---

*Desenvolvido com ❤️ para fins educacionais*
