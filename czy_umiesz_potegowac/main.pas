program Suma_Kwadratow;

var podstawa, wykladnik, czarodziej, czarodziejka: longint;
    
begin 
   readln (podstawa, wykladnik);
   czarodziejka := podstawa mod 10;
   case czarodziejka of
        1: writeln ('1');
        2: begin 
                czarodziej := wykladnik mod 4;
                case czarodziej of
                    0: writeln ('6');
                    1: writeln ('2');
                    2: writeln ('4');
                    3: writeln ('8');
                end;
            end;
        3:  begin 
                czarodziej := wykladnik mod 4;
                case czarodziej of
                    0: writeln ('1');
                    1: writeln ('3');
                    2: writeln ('9');
                    3: writeln ('7');
                end;
            end;
        4:  begin 
                czarodziej := wykladnik mod 2;
                case czarodziej of
                    0: writeln ('6');
                    1: writeln ('4');
                end;
            end;
        5:  begin writeln ('5'); end;
        6:  begin writeln ('6'); end;
        7:  begin 
                czarodziej := wykladnik mod 4;
                case czarodziej of
                    0: writeln ('1');
                    1: writeln ('7');
                    2: writeln ('9');
                    3: writeln ('3');
                end;
            end;
        8:  begin 
                czarodziej := wykladnik mod 4;
                case czarodziej of
                    0: writeln ('6');
                    1: writeln ('8');
                    2: writeln ('4');
                    3: writeln ('2');
                end;
            end;
        9:  begin 
                czarodziej := wykladnik mod 2;
                case czarodziej of
                    0: writeln ('1');
                    1: writeln ('9');
                end;
            end;
        0: writeln('0');
   end;
   
end.