set terminal pngcairo size 1200,960
set output "probablity_4_10.png"
set title "Random Walker for n = 10 with probability = 0.4"
set xlabel "steps (n)"
set ylabel "positions (x)"
set key off
set grid 
set xrange [0:11]
set yrange [-11:11]
set xtics 1
set ytics 1

plot "data_10_4.txt" every :1 using 1:2 with lines,2

set terminal pngcairo size 1200,960
set output "probablity_4_100.png"
set title "Random Walker for n = 100 with probability = 0.4"
set xlabel "steps (n)"
set ylabel "positions (x)"
set key off
set grid 
set xrange [0:101]
set yrange [-101:101]
set xtics 10
set ytics 10

plot "data_100_4.txt" every :1 using 1:2 with lines,20

set terminal pngcairo size 1200,960
set output "probablity_4_1000.png"
set title "Random Walker for n = 1000 with probability = 0.4"
set xlabel "steps (n)"
set ylabel "positions (x)"
set key off
set grid 
set xrange [0:1001]
set yrange [-1001:1001]
set xtics 100
set ytics 100

plot "data_1000_4.txt" every :1 using 1:2 with lines,200