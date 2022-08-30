clear
clc

d = importdata('result_O2.txt');

plot(d(:,1), d(:,2))
hold on
plot([-10 10], [0 0])