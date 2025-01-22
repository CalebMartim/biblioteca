alias c='time g++ -std=c++20 -D DEBUG -Wall -Wextra -Wshadow -Wconversion -g3 -fsanitize=address,undefined -O2 -o a'
# Observação: dependendo do seu código, a compilação pode ser consideravelmente mais rápida sem as flags 
# "-g3 -fsanitize=address,undefined -O2", então considere este segundo alias para "fast compile"
alias fc='time g++ -std=c++20 -D DEBUG -Wall -Wextra -Wshadow -Wconversion -o a'
