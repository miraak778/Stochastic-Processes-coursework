set terminal pngcairo size 1200,960
set output "Normalised_histogram_7_10.png"
set style data histograms
set style fill solid 0.9
set boxwidth 1

set title "Random Walker for n = 10 with probability = 0.7"
set xlabel "final positions (x)"
set ylabel "Normalized frequency (f)"
set key off
set grid 
set xrange [-10:10]
set yrange [0:1]
set xtics 1
set ytics 0.1

plot "data_hist_10_7.txt" using 1:2 with boxes

set terminal pngcairo size 1200,960
set output "Normalised_histogram_7_100.png"
set style data histograms
set style fill solid 0.9
set boxwidth 1

set title "Random Walker for n = 100 with probability = 0.7"
set xlabel "final positions (x)"
set ylabel "Normalized frequency (f)"
set key off
set grid 
set xrange [-100:100]
set yrange [0:0.1]
set xtics 10
set ytics 0.01

plot "data_hist_100_7.txt" using 1:2 with boxes

set terminal pngcairo size 1200,960
set output "Normalised_histogram_7_1000.png"
set style data histograms
set style fill solid 0.9
set boxwidth 1

set title "Random Walker for n = 1000 with probability = 0.7"
set xlabel "final positions (x)"
set ylabel "Normalized frequency (f)"
set key off
set grid 
set xrange [-1000:1000]
set yrange [0:0.04]
set xtics 100
set ytics 0.001

plot "data_hist_1000_7.txt" using 1:2 with boxes

