var lineReader = require('readline').createInterface({
    input: require('fs').createReadStream('input.txt')
  });
  
  lineReader.on('line', function (line) {
    console.log(line);
  });
  lineReader.on ("error", function (error){
    console.log ("error: " + error);
})