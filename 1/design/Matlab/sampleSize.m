function [r,s] = sampleSize(z,s,mean)
r = ((s./mean)./3).*100;
s = ceil(((z.*s)./(mean.*r.*0.01)).^2);
end

