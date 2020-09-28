using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Net;


namespace callWSAutomacao
{
    class Program
    {
        static void Main(string[] args)
        {
            string rootAdd = "http://piautomacao/";
            DateTime agora = DateTime.Now;
            WebRequest request = WebRequest.Create(rootAdd+ args[0]);
            WebResponse response = request.GetResponse();
            Console.WriteLine(((HttpWebResponse)response).StatusDescription);


        }
    }
}
