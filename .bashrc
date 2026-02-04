alias g='time g++ -std=c++20 -D DEBUG -Wall -Wextra -Wshadow -Wconversion -g3 -fsanitize=address,undefined -O2 -o a'
# Observação: dependendo do seu código, a compilação pode ser consideravelmente mais rápida sem as flags 
# "-g3 -fsanitize=address,undefined -O2", então considere este segundo alias para "fast compile"
alias fg='time g++ -std=c++20 -D DEBUG -Wall -Wextra -Wshadow -Wconversion -o a'

alias copy='xclip -selection clipboard <'
# PS: I'm not sure if xclip is in Maratona Linux
