#include <stdio.h>
#include <time.h>

int main() {
    time_t agora;
    struct tm *data_hora;
    const char *meses[] = {
        "janeiro", "fevereiro", "marco", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };

    agora = time(NULL);
    data_hora = localtime(&agora);

    printf("%02d/%02d/%04d - %s e %02d:%02d\n",
           data_hora->tm_mday,
           data_hora->tm_mon + 1,
           data_hora->tm_year + 1900,
           meses[data_hora->tm_mon],
           data_hora->tm_hour,
           data_hora->tm_min);

    return 0;
}
