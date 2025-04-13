#ifndef STATISTICS_HPP
#define STATISTICS_HPP

#include "billiard.hpp"
#include "particle.hpp"
#include <vector>

// Aggiungi la dichiarazione della funzione
float getValidFloat(const std::string &prompt, float min, float max); 

// Risultati statistici
struct StatsResult {
    float mean;
    float stddev;
    float skewness;
    float kurtosis;
};

void save_to_file(const std::string& filename, const std::vector<float>&data); // Funzione per scrivere su testo

// Funzione principale di simulazione
void run_statistics(
    int N,
    float mu_y0,
    float sigma_y0,
    float mu_theta0_deg,
    float sigma_theta0_deg,
    float velocity,
    const Billiard& billiard
);

#endif
