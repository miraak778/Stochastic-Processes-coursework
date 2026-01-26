set terminal pngcairo size 1200,960
set output "Normalised_histogram_5.png"
set multiplot layout 2,2 title "Random walker(ensemble of 100000 walks) for p = 0.5"

set style data histograms
set style fill solid 0.9
set boxwidth 1

set title "Random Walker for n = 10"
set xlabel "final positions (x)"
set ylabel "Normalized frequency (f)"
set key off
set grid 
set xrange [-10:10]
set yrange [0:1]

plot "data_hist_10_5.txt" using 1:2 with boxes

set title "Random Walker for n = 100"
set xlabel "final positions (x)"
set ylabel "Normalized frequency (f)"
set key off
set grid 
set xrange [-100:100]
set yrange [0:0.1]

plot "data_hist_100_5.txt" using 1:2 with boxes

set title "Random Walker for n = 1000"
set xlabel "final positions (x)"
set ylabel "Normalized frequency (f)"
set key off
set grid 
set xrange [-1000:1000]
set yrange [0:0.04]

plot "data_hist_1000_5.txt" using 1:2 with boxes

